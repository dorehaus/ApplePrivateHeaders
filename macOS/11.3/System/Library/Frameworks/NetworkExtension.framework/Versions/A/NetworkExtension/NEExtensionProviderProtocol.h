/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NEExtensionProviderProtocol <NSObject>
@required
-(void)createWithCompletionHandler:(/*^block*/id)arg1;
-(void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2;
-(void)dispose;
-(void)wake;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)validateWithCompletionHandler:(/*^block*/id)arg1;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1;
-(void)stopWithReason:(int)arg1;

@end

