/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSCollectionLayoutSpacing : NSObject <NSCopying> {

	double _spacing;
	char _isFlexible;

}

@property (readonly) double spacing; 
@property (readonly) char isFlexibleSpacing; 
@property (readonly) char isFixedSpacing; 
+(id)defaultSpacing;
+(id)flexibleSpacing:(double)arg1 ;
+(id)fixedSpacing:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(double)spacing;
-(id)initWithSpacing:(double)arg1 isFlexible:(char)arg2 ;
-(char)isFlexibleSpacing;
-(char)_hasSpacing;
-(char)isFixedSpacing;
@end

