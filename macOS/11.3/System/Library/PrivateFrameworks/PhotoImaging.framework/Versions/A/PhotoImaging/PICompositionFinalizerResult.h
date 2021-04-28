/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/Versions/A/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NUComposition;

@interface PICompositionFinalizerResult : NSObject {

	long long _disposition;
	NUComposition* _composition;

}

@property (readonly) long long disposition;                         //@synthesize disposition=_disposition - In the implementation block
@property (copy,readonly) NUComposition * composition;              //@synthesize composition=_composition - In the implementation block
-(NUComposition *)composition;
-(id)initWithDisposition:(long long)arg1 composition:(id)arg2 ;
-(long long)disposition;
@end

