/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCFeedCursor, FCDateRange;

@interface FCFeedRange : NSObject <NSSecureCoding, NSCopying> {

	FCFeedCursor* _top;
	FCFeedCursor* _bottom;

}

@property (nonatomic,copy) FCFeedCursor * top;                            //@synthesize top=_top - In the implementation block
@property (nonatomic,copy) FCFeedCursor * bottom;                         //@synthesize bottom=_bottom - In the implementation block
@property (nonatomic,readonly) char reachesTopOfFeed; 
@property (nonatomic,readonly) char reachesBottomOfFeed; 
@property (nonatomic,readonly) char isEmpty; 
@property (nonatomic,copy,readonly) FCDateRange * dateRange; 
+(char)supportsSecureCoding;
+(id)feedRangeFromDateRange:(id)arg1 ;
+(id)feedRangeWithTop:(id)arg1 bottom:(id)arg2 ;
+(id)feedRangeByMergingRange:(id)arg1 withRange:(id)arg2 ;
+(id)feedRangeFromDate:(id)arg1 toDate:(id)arg2 ;
+(id)feedRangeWithMaxOrder:(unsigned long long)arg1 minOrder:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(char)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(FCFeedCursor *)top;
-(FCFeedCursor *)bottom;
-(void)setBottom:(FCFeedCursor *)arg1 ;
-(void)setTop:(FCFeedCursor *)arg1 ;
-(char)intersectsRange:(id)arg1 ;
-(FCDateRange *)dateRange;
-(id)feedRangeByIntersectingWithRange:(id)arg1 ;
-(char)reachesTopOfFeed;
-(char)reachesBottomOfFeed;
-(id)feedRangeByUnioningWithRange:(id)arg1 ;
-(char)containsFeedRange:(id)arg1 ;
-(char)containsOrder:(unsigned long long)arg1 ;
-(char)intersectsOrAdjoinsRange:(id)arg1 ;
-(char)containsCursor:(id)arg1 ;
@end
