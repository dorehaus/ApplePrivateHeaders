/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableOrderedSet;

@interface PLClientSandboxExtensionCache : NSObject {

	os_unfair_lock_s _lock;
	unsigned long long _cacheLimit;
	NSMutableOrderedSet* _sandboxExtensionURLs;

}

@property (nonatomic,retain) NSMutableOrderedSet * sandboxExtensionURLs;              //@synthesize sandboxExtensionURLs=_sandboxExtensionURLs - In the implementation block
@property (nonatomic,readonly) unsigned long long cacheLimit;                         //@synthesize cacheLimit=_cacheLimit - In the implementation block
-(char)containsURL:(id)arg1 ;
-(NSMutableOrderedSet *)sandboxExtensionURLs;
-(unsigned long long)cacheLimit;
-(id)initWithCacheLimit:(unsigned long long)arg1 ;
-(void)insertSandboxedURL:(id)arg1 ;
-(void)setSandboxExtensionURLs:(NSMutableOrderedSet *)arg1 ;
@end

