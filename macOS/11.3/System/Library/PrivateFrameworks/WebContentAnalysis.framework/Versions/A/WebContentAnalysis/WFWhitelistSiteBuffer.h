/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/Versions/A/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableArray;

@interface WFWhitelistSiteBuffer : NSObject {

	NSMutableSet* _siteSet;
	NSMutableArray* _siteBuffer;
	unsigned long long maxSize;

}

@property (retain) NSMutableSet * siteSet;                   //@synthesize siteSet=_siteSet - In the implementation block
@property (retain) NSMutableArray * siteBuffer;              //@synthesize siteBuffer=_siteBuffer - In the implementation block
@property (assign) unsigned long long maxSize; 
-(void)trimToSize:(unsigned long long)arg1 ;
-(NSMutableArray *)siteBuffer;
-(NSMutableSet *)siteSet;
-(char)containsMetasitePrefixOfURLString:(id)arg1 ;
-(void)setSiteSet:(NSMutableSet *)arg1 ;
-(void)setSiteBuffer:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(unsigned long long)maxSize;
-(void)setMaxSize:(unsigned long long)arg1 ;
-(char)containsURLString:(id)arg1 ;
-(void)addURLString:(id)arg1 ;
@end

