/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/Versions/A/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class FULabel;

@interface FUErrorView : NSView {

	FULabel* _errorLabel;

}

@property (__weak) FULabel * errorLabel;              //@synthesize errorLabel=_errorLabel - In the implementation block
-(void)awakeFromNib;
-(FULabel *)errorLabel;
-(void)setErrorLabel:(FULabel *)arg1 ;
-(void)setStyleProvider:(id)arg1 ;
@end

