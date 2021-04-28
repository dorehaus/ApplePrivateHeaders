/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@class MKImageView, MKVibrancyAwareLabelView, _MKUILabel, NSLayoutConstraint, MKPlaceReviewAvatarGenerator, NSString, NSDate;

@interface MKPlaceReviewsViewCell : MKPlaceSectionRowView {

	MKImageView* _pictureView;
	MKVibrancyAwareLabelView* _detailLabel;
	_MKUILabel* _reviewLabel;
	NSLayoutConstraint* _reviewLabelTopConstraint;
	NSLayoutConstraint* _reviewLabelToAuthorLabelConstraint;
	NSLayoutConstraint* _authorLabelBaselineConstraint;
	char _isLastReview;
	MKPlaceReviewAvatarGenerator* _avatarGenerator;
	unsigned long long _rating;
	NSString* _author;
	NSDate* _date;

}

@property (assign,nonatomic) unsigned long long rating;                                   //@synthesize rating=_rating - In the implementation block
@property (nonatomic,copy) NSString * author;                                             //@synthesize author=_author - In the implementation block
@property (nonatomic,retain) NSDate * date;                                               //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) char isLastReview;                                           //@synthesize isLastReview=_isLastReview - In the implementation block
@property (nonatomic,retain) MKPlaceReviewAvatarGenerator * avatarGenerator;              //@synthesize avatarGenerator=_avatarGenerator - In the implementation block
-(NSDate *)date;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)author;
-(void)setRating:(unsigned long long)arg1 ;
-(unsigned long long)rating;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setReview:(id)arg1 ;
-(void)infoCardThemeChanged;
-(void)_contentSizeDidChange;
-(void)setIsLastReview:(char)arg1 ;
-(MKPlaceReviewAvatarGenerator *)avatarGenerator;
-(void)setAvatarGenerator:(MKPlaceReviewAvatarGenerator *)arg1 ;
-(void)_updatePictureTheme:(id)arg1 ;
-(void)_updateBaselineConstraints;
-(id)detailLabelText;
-(void)setReviewText:(id)arg1 ;
-(void)setPicture:(id)arg1 ;
-(unsigned long long)maxCharacters;
-(char)isLastReview;
@end

