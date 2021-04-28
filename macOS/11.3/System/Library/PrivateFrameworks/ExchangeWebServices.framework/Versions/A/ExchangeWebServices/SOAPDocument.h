/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/SOAPBaseDocument.h>
#import <libobjc.A.dylib/XSDefinitionProvider.h>

@class SOAPEnvelope, NSString;

@interface SOAPDocument : SOAPBaseDocument <XSDefinitionProvider> {

	SOAPEnvelope* _Envelope;

}

@property (nonatomic,retain) SOAPEnvelope * Envelope;               //@synthesize Envelope=_Envelope - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definition;
-(NSString *)description;
-(void)_XMLStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)XMLStringWithOptions:(unsigned long long)arg1 ;
-(void)setEnvelope:(SOAPEnvelope *)arg1 ;
-(SOAPEnvelope *)Envelope;
-(void)_XMLAttributeStringWithPrefix:(id)arg1 name:(id)arg2 value:(id)arg3 options:(unsigned long long)arg4 appendingToString:(id)arg5 ;
-(void)_XMLQualifiedNameForNamespace:(id)arg1 elementName:(id)arg2 options:(unsigned long long)arg3 appendingToString:(id)arg4 ;
-(void)_XMLAttributesStringWithComplexType:(id)arg1 options:(unsigned long long)arg2 appendingToString:(id)arg3 ;
-(void)_XMLStringWithComplexType:(id)arg1 options:(unsigned long long)arg2 appendingToString:(id)arg3 ;
@end
