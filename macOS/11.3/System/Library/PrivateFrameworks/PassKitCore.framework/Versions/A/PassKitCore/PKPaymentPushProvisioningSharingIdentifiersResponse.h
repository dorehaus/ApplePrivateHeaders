/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSDictionary;

@interface PKPaymentPushProvisioningSharingIdentifiersResponse : PKPaymentWebServiceResponse {

	NSDictionary* _sharingIdentifiersDictionary;

}

@property (nonatomic,readonly) NSDictionary * sharingIdentifiersDictionary;              //@synthesize sharingIdentifiersDictionary=_sharingIdentifiersDictionary - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSDictionary *)sharingIdentifiersDictionary;
@end
