/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreUI.framework/Versions/A/StoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreUI/StoreUI-Structs.h>
@interface FRStoreReachability : NSObject {

	SCNetworkReachabilityRef _reachRef;

}
+(id)sharedInstance;
+(char)isStoreReachable;
-(void)dealloc;
-(id)init;
-(char)_isReachableWithFlags:(unsigned)arg1 ;
-(char)_isStoreReachable;
@end

