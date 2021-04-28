/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface PKDiscoveryMessagesMetadata : NSObject {

	long long _version;
	NSURL* _messagesBundleURL;

}

@property (nonatomic,readonly) long long version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSURL * messagesBundleURL;              //@synthesize messagesBundleURL=_messagesBundleURL - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)version;
-(NSURL *)messagesBundleURL;
@end
