/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface XSElement : NSObject {

	NSString* _elementName;
	NSString* _namespaceURI;
	Class _type;

}

@property (nonatomic,copy,readonly) NSString * elementName;               //@synthesize elementName=_elementName - In the implementation block
@property (nonatomic,copy,readonly) NSString * namespaceURI;              //@synthesize namespaceURI=_namespaceURI - In the implementation block
@property (nonatomic,readonly) Class type;                                //@synthesize type=_type - In the implementation block
-(id)init;
-(Class)type;
-(NSString *)elementName;
-(NSString *)namespaceURI;
-(id)initWithElementName:(id)arg1 namespaceURI:(id)arg2 type:(Class)arg3 ;
@end
