/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/Versions/A/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MKPlaceViewController.h>
#import <libobjc.A.dylib/_MKPlaceViewControllerFeedbackDelegate.h>

@protocol SFFeedbackListener;
@class NSString;

@interface SearchUIMapsViewController : _MKPlaceViewController <_MKPlaceViewControllerFeedbackDelegate> {

	id<SFFeedbackListener> _feedbackListener;
	unsigned long long _queryId;

}

@property (__weak) id<SFFeedbackListener> feedbackListener;              //@synthesize feedbackListener=_feedbackListener - In the implementation block
@property (readonly) unsigned long long queryId;                         //@synthesize queryId=_queryId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2 ;
-(unsigned long long)queryId;
-(id<SFFeedbackListener>)feedbackListener;
-(id)initWithMapsData:(id)arg1 feedbackListener:(id)arg2 queryId:(unsigned long long)arg3 ;
-(void)setFeedbackListener:(id<SFFeedbackListener>)arg1 ;
@end

