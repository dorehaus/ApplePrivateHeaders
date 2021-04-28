/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSView.h>
#import <libobjc.A.dylib/MKPlaceHoursViewDelegate.h>

@class GEOLinkedService, NSArray, NSView, MKImageView, _MKUILabel, NSLayoutConstraint, NSString;

@interface MKPlaceCompleteHoursView : NSView <MKPlaceHoursViewDelegate> {

	GEOLinkedService* _linkedService;
	NSArray* _sortedBusinessHours;
	NSView* _containerViewForHoursAndCategoryName;
	MKImageView* _categoryIconView;
	_MKUILabel* _localizedCategoryNameLabel;
	NSLayoutConstraint* _hoursTopLabelBaselineToCategoryName;
	NSArray* _placeHoursViews;

}

@property (nonatomic,retain) NSArray * placeHoursViews;              //@synthesize placeHoursViews=_placeHoursViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)commonInit;
-(void)_setUpConstraints;
-(void)_contentSizeDidChange;
-(void)hoursViewDidUpdate:(id)arg1 ;
-(id)initWithLinkedService:(id)arg1 showTodaysHoursOnly:(char)arg2 ;
-(NSArray *)placeHoursViews;
-(void)setPlaceHoursViews:(NSArray *)arg1 ;
@end
