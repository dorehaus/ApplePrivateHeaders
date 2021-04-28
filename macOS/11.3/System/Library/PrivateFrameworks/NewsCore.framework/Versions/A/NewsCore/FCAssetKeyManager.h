/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>
#import <libobjc.A.dylib/FCAssetKeyManagerType.h>

@protocol FCAssetKeyServiceType, FCAssetKeyCacheType, FCAssetKeyManagerDelegate, FCOperationThrottler;
@class FCThreadSafeMutableSet, FCThreadSafeMutableDictionary, NSString;

@interface FCAssetKeyManager : NSObject <FCOperationThrottlerDelegate, FCAssetKeyManagerType> {

	id<FCAssetKeyServiceType> _service;
	id<FCAssetKeyCacheType> _cache;
	id<FCAssetKeyManagerDelegate> _delegate;
	id<FCOperationThrottler> _throttler;
	FCThreadSafeMutableSet* _pendingWrappingKeyIDs;
	FCThreadSafeMutableDictionary* _errorsByKey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(void)clearUnauthorizedAssetKeys;
-(id)cachedWrappingKeyWithID:(id)arg1 ;
-(void)fetchWrappingKeyWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)eraseAllKeys;
@end

