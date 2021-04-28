/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEProvider.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NEFilterProviderConfiguration, NSString;

@interface NEFilterProvider : NEProvider <NSExtensionRequestHandling> {

	NEFilterProviderConfiguration* _filterConfiguration;

}

@property (retain) NEFilterProviderConfiguration * filterConfiguration;              //@synthesize filterConfiguration=_filterConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptionForAction:(long long)arg1 ;
-(void)handleReport:(id)arg1 ;
-(void)startFilterWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopFilterWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NEFilterProviderConfiguration *)filterConfiguration;
-(void)setFilterConfiguration:(NEFilterProviderConfiguration *)arg1 ;
@end

