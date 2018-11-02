/**
 * OpenAPI Petstore *_/ ' \" =end -- \\r\\n \\n \\r
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\  *_/ ' \" =end --       
 *
 * OpenAPI spec version: 1.0.0 *_/ ' \" =end -- \\r\\n \\n \\r
 * Contact: something@something.abc *_/ ' \" =end -- \\r\\n \\n \\r
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIReturn.h
 *
 * Model for testing reserved words  *_/ &#39; \&quot; &#x3D;end -- \\r\\n \\n \\r
 */

#ifndef OAIReturn_H_
#define OAIReturn_H_

#include <QJsonObject>



#include "OAIObject.h"

namespace OpenAPI {

class OAIReturn: public OAIObject {
public:
    OAIReturn();
    OAIReturn(QString json);
    ~OAIReturn();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIReturn* fromJson(QString jsonString) override;

    qint32 getReturn();
    void setReturn(qint32 _return);


    virtual bool isSet() override;

private:
    qint32 _return;
    bool m__return_isSet;

};

}

#endif /* OAIReturn_H_ */
