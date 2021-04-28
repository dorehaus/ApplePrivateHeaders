/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSHTTPURLResponse, NSString, NSNumber;

@interface SSAuthenticationResponse : NSObject {

	NSDictionary* _responseDictionary;
	long long _urlBagType;
	NSHTTPURLResponse* _urlResponse;

}

@property (assign) long long URLBagType;                                       //@synthesize urlBagType=_urlBagType - In the implementation block
@property (readonly) NSDictionary * responseDictionary;                        //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (readonly) NSHTTPURLResponse * URLResponse; 
@property (readonly) NSString * accountName; 
@property (readonly) long long accountKind; 
@property (readonly) NSNumber * accountUniqueIdentifier; 
@property (readonly) long long availableServiceTypes; 
@property (readonly) NSString * creditsString; 
@property (readonly) long long enabledServiceTypes; 
@property (getter=isManagedStudent,readonly) char managedStudent; 
@property (getter=isNewCustomer,readonly) char newCustomer; 
@property (readonly) NSString * storeFrontIdentifier; 
@property (readonly) NSString * token; 
@property (readonly) NSNumber * failureType; 
@property (readonly) long long responseType; 
@property (readonly) NSString * userMessage; 
-(NSString *)token;
-(id)altDSID;
-(NSString *)accountName;
-(NSString *)userMessage;
-(long long)responseType;
-(NSDictionary *)responseDictionary;
-(NSString *)storeFrontIdentifier;
-(NSNumber *)accountUniqueIdentifier;
-(char)isManagedStudent;
-(void)setURLBagType:(long long)arg1 ;
-(long long)URLBagType;
-(long long)accountKind;
-(id)_valueForFirstAvailableKey:(id)arg1 ;
-(NSNumber *)failureType;
-(NSHTTPURLResponse *)URLResponse;
-(long long)enabledServiceTypes;
-(NSString *)creditsString;
-(long long)availableServiceTypes;
-(char)isNewCustomer;
-(id)initWithURLResponse:(id)arg1 dictionary:(id)arg2 ;
-(id)newAccount;
-(long long)_responseTypeForFailureType:(long long)arg1 ;
-(long long)_responseTypeForErrorNumber:(long long)arg1 ;
-(long long)_responseTypeForStatusValue:(long long)arg1 ;
@end
