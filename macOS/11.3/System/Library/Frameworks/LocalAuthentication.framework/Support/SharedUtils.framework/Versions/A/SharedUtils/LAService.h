/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/Versions/A/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSXPCListenerEndpoint;


@protocol LAService <NSObject>
@property (nonatomic,readonly) NSString * serviceID; 
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint; 
@required
-(NSXPCListenerEndpoint *)endpoint;
-(NSString *)serviceID;

@end

