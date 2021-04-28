/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUNetworkReachabilityCore.h>

@class NSString;

@interface TSUSCNetworkReachabilityCore : NSObject <TSUNetworkReachabilityCore> {

	SCNetworkReachabilityRef _reachabilityRef;
	/*^block*/id _notifyBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithReachabilityRef:(const SCNetworkReachabilityRef)arg1 ;
-(char)getReachabilityFlags:(out unsigned*)arg1 ;
-(char)startNotifyingWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)stopNotifying;
@end

