/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriKitInvocation.framework/Versions/A/SiriKitInvocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SKIDirectInvocationPayload;

@interface SKIMessagesGatekeeperPayload : NSObject {

	NSString* _appBundleId;

}

@property (copy) NSString * appBundleId;                                                 //@synthesize appBundleId=_appBundleId - In the implementation block
@property (retain,readonly) SKIDirectInvocationPayload * invocationPayload; 
+(char)supports:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)appBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(id)initWithAppBundleId:(id)arg1 ;
-(SKIDirectInvocationPayload *)invocationPayload;
@end
