/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/Versions/A/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneKit/TKPickerRowItem.h>

@class NSString;

@interface TKPickerSelectableItem : TKPickerRowItem {

	char _shouldTintText;
	char _showsCheckmark;
	char _showsDisclosureIndicator;
	char _shouldPreventSelection;
	NSString* _text;
	NSString* _detailText;

}

@property (setter=_setText:,nonatomic,copy) NSString * text;                                                  //@synthesize text=_text - In the implementation block
@property (assign,setter=_setShouldTintText:,nonatomic) char shouldTintText;                                  //@synthesize shouldTintText=_shouldTintText - In the implementation block
@property (setter=_setDetailText:,nonatomic,copy) NSString * detailText;                                      //@synthesize detailText=_detailText - In the implementation block
@property (assign,setter=_setShowsCheckmark:,nonatomic) char showsCheckmark;                                  //@synthesize showsCheckmark=_showsCheckmark - In the implementation block
@property (assign,setter=_setShowsDisclosureIndicator:,nonatomic) char showsDisclosureIndicator;              //@synthesize showsDisclosureIndicator=_showsDisclosureIndicator - In the implementation block
@property (assign,setter=_setShouldPreventSelection:,nonatomic) char shouldPreventSelection;                  //@synthesize shouldPreventSelection=_shouldPreventSelection - In the implementation block
-(NSString *)text;
-(NSString *)detailText;
-(void)_setText:(id)arg1 ;
-(char)showsDisclosureIndicator;
-(void)_appendDescriptionOfAttributesToString:(id)arg1 ;
-(void)_setShowsCheckmark:(char)arg1 ;
-(void)_setShowsDisclosureIndicator:(char)arg1 ;
-(void)_setShouldTintText:(char)arg1 ;
-(void)_setShouldPreventSelection:(char)arg1 ;
-(void)_setDetailText:(id)arg1 ;
-(char)shouldTintText;
-(char)shouldPreventSelection;
-(char)showsCheckmark;
@end

