/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGSuggestion.h>

@class NSArray, NSSet, NSDate, NSString, PHAsset;

@interface PGSingleAssetSuggestion : NSObject <PGSuggestion> {

	PHAsset* _asset;
	char _isInvalid;
	unsigned short _type;
	unsigned short _subtype;
	NSSet* _features;
	id _recipe;
	unsigned long long _relevanceDurationInDays;
	NSString* _title;
	NSString* _subtitle;
	NSArray* _reasons;
	double _score;

}

@property (nonatomic,retain) id recipe;                                                     //@synthesize recipe=_recipe - In the implementation block
@property (assign,nonatomic) unsigned long long relevanceDurationInDays;                    //@synthesize relevanceDurationInDays=_relevanceDurationInDays - In the implementation block
@property (nonatomic,copy) NSString * title;                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                             //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) char isInvalid;                                                //@synthesize isInvalid=_isInvalid - In the implementation block
@property (assign,nonatomic) double score;                                                  //@synthesize score=_score - In the implementation block
@property (nonatomic,copy) NSArray * reasons;                                               //@synthesize reasons=_reasons - In the implementation block
@property (nonatomic,readonly) unsigned short type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short subtype;                                      //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,readonly) unsigned short state; 
@property (nonatomic,readonly) unsigned short notificationState; 
@property (nonatomic,readonly) long long version; 
@property (nonatomic,readonly) NSArray * keyAssets; 
@property (nonatomic,readonly) NSArray * representativeAssets; 
@property (nonatomic,readonly) NSSet * features;                                            //@synthesize features=_features - In the implementation block
@property (nonatomic,copy,readonly) NSArray * suggestedPersonLocalIdentifiers; 
@property (nonatomic,readonly) char containsUnverifiedPersons; 
@property (nonatomic,readonly) NSDate * universalStartDate; 
@property (nonatomic,readonly) NSDate * universalEndDate; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) unsigned char notificationQuality; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(unsigned short)state;
-(unsigned short)type;
-(long long)version;
-(unsigned short)subtype;
-(void)setTitle:(NSString *)arg1 ;
-(double)score;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSDate *)creationDate;
-(NSArray *)reasons;
-(void)setScore:(double)arg1 ;
-(void)setReasons:(NSArray *)arg1 ;
-(char)isInvalid;
-(NSSet *)features;
-(id)recipe;
-(void)setRecipe:(id)arg1 ;
-(unsigned short)notificationState;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(char)containsUnverifiedPersons;
-(NSArray *)representativeAssets;
-(NSArray *)keyAssets;
-(void)setIsInvalid:(char)arg1 ;
-(NSArray *)suggestedPersonLocalIdentifiers;
-(unsigned long long)relevanceDurationInDays;
-(unsigned char)notificationQuality;
-(id)initWithType:(unsigned short)arg1 subtype:(unsigned short)arg2 asset:(id)arg3 ;
-(void)setRelevanceDurationInDays:(unsigned long long)arg1 ;
@end
