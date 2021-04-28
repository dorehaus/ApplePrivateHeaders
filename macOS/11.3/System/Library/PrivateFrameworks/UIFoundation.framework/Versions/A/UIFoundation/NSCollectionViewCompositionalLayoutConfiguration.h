/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/_NSCollectionViewCompositionalLayoutConfiguration.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface NSCollectionViewCompositionalLayoutConfiguration : NSObject <_NSCollectionViewCompositionalLayoutConfiguration, NSCopying> {

	long long _safeAreaReference;
	long long _scrollDirection;
	double _interSectionSpacing;
	NSArray* _boundarySupplementaryItems;

}

@property (assign,setter=_setSafeAreaReference:,getter=_safeAreaReference,nonatomic) long long safeAreaReference; 
@property (assign) long long scrollDirection;                                                                                  //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (assign) double interSectionSpacing;                                                                                 //@synthesize interSectionSpacing=_interSectionSpacing - In the implementation block
@property (copy) NSArray * boundarySupplementaryItems;                                                                         //@synthesize boundarySupplementaryItems=_boundarySupplementaryItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)scrollDirection;
-(void)setScrollDirection:(long long)arg1 ;
-(NSArray *)boundarySupplementaryItems;
-(void)setBoundarySupplementaryItems:(NSArray *)arg1 ;
-(double)interSectionSpacing;
-(void)setInterSectionSpacing:(double)arg1 ;
-(id)initWithScrollDirection:(long long)arg1 interSectionSpacing:(double)arg2 boundarySupplememtaryItems:(id)arg3 safeAreaReference:(long long)arg4 ;
-(unsigned long long)differencesFromConfiguration:(id)arg1 ;
-(long long)_safeAreaReference;
-(void)_setSafeAreaReference:(long long)arg1 ;
@end

