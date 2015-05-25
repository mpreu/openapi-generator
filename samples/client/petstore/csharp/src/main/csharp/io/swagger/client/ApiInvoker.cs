using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Text;
using Newtonsoft.Json;
using RestSharp;

namespace IO.Swagger.Client {
  public class ApiInvoker {
    public ApiInvoker() {
      this.basePath = "http://petstore.swagger.io/v2";
    }

    public ApiInvoker(String basePath) {
      this.basePath = basePath;
    }

    public string basePath { get; set; }
    public RestClient restClient { get; set; }
    private Dictionary<String, String> defaultHeaderMap = new Dictionary<String, String>();

    public Object CallApi(String Path, RestSharp.Method Method, Dictionary<String, String> QueryParams, String PostBody, 
      Dictionary<String, String> HeaderParams, Dictionary<String, String> FormParams, Dictionary<String, String> FileParams) {

      var request = new RestRequest(Path, Method);

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in this.defaultHeaderMap)
        request.AddHeader(defaultHeader.Key, defaultHeader.Value);

      // add header parameter, if any
      foreach(KeyValuePair<string, string> param in HeaderParams)
        request.AddHeader(param.Key, param.Value);
     
      // add query parameter, if any
      foreach(KeyValuePair<string, string> param in QueryParams)
        request.AddUrlSegment(param.Key, param.Value);

      // add form parameter, if any
      foreach(KeyValuePair<string, string> param in FormParams)
        request.AddParameter(param.Key, param.Value);

      // add file parameter, if any
      foreach(KeyValuePair<string, string> param in FormParams)
        request.AddFile(param.Key, param.Value);

      if (PostBody == null) {
        request.AddParameter("application/json", PostBody, ParameterType.RequestBody); // http body (model) parameter
      }

      return (Object)restClient.Execute(request);

    }

    /// <summary>
    /// Add default header
    /// </summary>
    /// <param name="key">  Header field name
    /// <param name="value"> Header field value
    /// <returns></returns>
    public void AddDefaultHeader(string key, string value) {
       defaultHeaderMap.Add(key, value);
    }

    /// <summary>
    /// Get default header
    /// </summary>
    /// <returns>Dictionary of default header</returns>
    public Dictionary<String, String> GetDefaultHeader() {
       return defaultHeaderMap;
    }

    /// <summary>
    /// escape string (url-encoded)
    /// </summary>
    /// <param name="str"> String to be escaped
    /// <returns>Escaped string</returns>
    public string EscapeString(string str) {
      return str;
    }

    /// <summary>
    /// if parameter is DateTime, output in ISO8601 format, otherwise just return the string
    /// </summary>
    /// <param name="obj"> The parameter (header, path, query, form)
    /// <returns>Formatted string</returns>
    public string ParameterToString(object obj)
    {
      return (obj is DateTime) ? ((DateTime)obj).ToString ("u") : Convert.ToString (obj);
    }

    /// <summary>
    /// Deserialize the JSON string into a proper object
    /// </summary>
    /// <param name="json"> JSON string
    /// <param name="type"> Object type
    /// <returns>Object representation of the JSON string</returns>
    public object Deserialize(string content, Type type) {
      if (type.GetType() == typeof(Object))
        return (Object)content;

      try
      {
          return JsonConvert.DeserializeObject(content, type);
      }
      catch (IOException e) {
        throw new ApiException(500, e.Message);
      }
    }

    /// <summary>
    /// Serialize an object into JSON string
    /// </summary>
    /// <param name="obj"> Object 
    /// <returns>JSON string</returns>
    public string Serialize(object obj) {
      try
      {
          return obj != null ? JsonConvert.SerializeObject(obj) : null;
      }
      catch (Exception e) {
        throw new ApiException(500, e.Message);
      }
    }
  }
}
