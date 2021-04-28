/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/Versions/A/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSyncFakeMutableBaseItem.h>
#import <MapsSuggestions/MapsSyncMutableReviewedPlace.h>

@class NSDate, NSUUID, NSString;

@interface MapsSyncFakeMutableReviewedPlace : MapsSyncFakeMutableBaseItem <MapsSyncMutableReviewedPlace> {

	char _hasUserReviewed;
	unsigned long long _muid;
	NSDate* _lastSuggestedReviewDate;

}

@property (assign,nonatomic) unsigned long long muid;                       //@synthesize muid=_muid - In the implementation block
@property (nonatomic,retain) NSDate * lastSuggestedReviewDate;              //@synthesize lastSuggestedReviewDate=_lastSuggestedReviewDate - In the implementation block
@property (assign,nonatomic) char hasUserReviewed;                          //@synthesize hasUserReviewed=_hasUserReviewed - In the implementation block
@property (nonatomic,copy) NSUUID * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)muid;
-(NSDate *)lastSuggestedReviewDate;
-(char)hasUserReviewed;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(void)commitEditsWithCompletion:(/*^block*/id)arg1 ;
-(void)setLastSuggestedReviewDate:(NSDate *)arg1 ;
-(void)setHasUserReviewed:(char)arg1 ;
-(id)initWithIdentifier:(id)arg1 hasUserReviewed:(char)arg2 lastSuggestedReviewDate:(id)arg3 ;
@end
