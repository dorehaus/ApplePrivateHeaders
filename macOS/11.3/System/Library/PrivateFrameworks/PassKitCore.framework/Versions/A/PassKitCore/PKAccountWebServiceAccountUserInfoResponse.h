/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class CNContact;

@interface PKAccountWebServiceAccountUserInfoResponse : PKAccountWebServiceResponse {

	CNContact* _userInfo;

}

@property (nonatomic,readonly) CNContact * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
-(CNContact *)userInfo;
-(id)initWithData:(id)arg1 ;
-(id)_stringValueFromDictionary:(id)arg1 key:(id)arg2 isOptional:(char)arg3 ;
@end

