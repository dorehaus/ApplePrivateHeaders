/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSPhishingURLClassifier.h>

@protocol WBSPhishingURLClassifier;
@class NSCache;

@interface WBSPhishingURLClassifierCache : NSObject <WBSPhishingURLClassifier> {

	NSCache* _cache;
	id<WBSPhishingURLClassifier> _urlClassifier;

}

@property (nonatomic,readonly) id<WBSPhishingURLClassifier> urlClassifier;              //@synthesize urlClassifier=_urlClassifier - In the implementation block
-(void)clearCache;
-(void)classifyURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<WBSPhishingURLClassifier>)urlClassifier;
-(id)initWithURLClassifier:(id)arg1 ;
-(void)cacheClassification:(unsigned long long)arg1 forURL:(id)arg2 ;
@end
