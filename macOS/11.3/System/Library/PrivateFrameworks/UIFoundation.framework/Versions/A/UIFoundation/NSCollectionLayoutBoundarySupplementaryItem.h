/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSCollectionLayoutSupplementaryItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSCollectionLayoutBoundarySupplementaryItem : NSCollectionLayoutSupplementaryItem <NSCopying> {

	long long _alignment;
	char _extendsBoundary;
	char _pinToVisibleBounds;
	CGPoint _offset;

}

@property (assign) char extendsBoundary;                 //@synthesize extendsBoundary=_extendsBoundary - In the implementation block
@property (assign) char pinToVisibleBounds;              //@synthesize pinToVisibleBounds=_pinToVisibleBounds - In the implementation block
@property (readonly) long long alignment;                //@synthesize alignment=_alignment - In the implementation block
@property (readonly) CGPoint offset;                     //@synthesize offset=_offset - In the implementation block
+(id)boundarySupplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 absoluteOffset:(CGPoint)arg4 ;
+(id)boundarySupplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(CGPoint)offset;
-(long long)alignment;
-(char)pinToVisibleBounds;
-(id)initWithSize:(id)arg1 contentInsets:(NSDirectionalEdgeInsets)arg2 elementKind:(id)arg3 containerAnchor:(id)arg4 itemAnchor:(id)arg5 zIndex:(long long)arg6 alignment:(long long)arg7 offset:(CGPoint)arg8 extendsBoundary:(char)arg9 pinToVisibleBounds:(char)arg10 ;
-(char)extendsBoundary;
-(id)copyWithContainerAnchor:(id)arg1 itemAnchor:(id)arg2 ;
-(void)setExtendsBoundary:(char)arg1 ;
-(void)setPinToVisibleBounds:(char)arg1 ;
@end
