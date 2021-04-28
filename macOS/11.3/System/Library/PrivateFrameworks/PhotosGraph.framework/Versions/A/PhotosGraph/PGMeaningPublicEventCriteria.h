/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGMeaningCriteria.h>

@class NSString;

@interface PGMeaningPublicEventCriteria : NSObject <PGMeaningCriteria> {

	NSString* _publicEventCategory;
	NSString* _publicEventCategoryNameString;

}

@property (nonatomic,retain) NSString * publicEventCategoryNameString;              //@synthesize publicEventCategoryNameString=_publicEventCategoryNameString - In the implementation block
@property (nonatomic,retain) NSString * publicEventCategory;                        //@synthesize publicEventCategory=_publicEventCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg1 ;
+(id)_publicEventCategoryForPublicEventCategoryName:(id)arg1 ;
-(NSString *)description;
-(char)isValid;
-(char)passesForMomentNode:(id)arg1 ;
-(void)setPublicEventCategory:(NSString *)arg1 ;
-(void)setPublicEventCategoryNameString:(NSString *)arg1 ;
-(NSString *)publicEventCategory;
-(NSString *)publicEventCategoryNameString;
@end

