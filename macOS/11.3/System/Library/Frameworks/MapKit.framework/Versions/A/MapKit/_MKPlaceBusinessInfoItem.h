/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSAttributedString, NSFont, NSColor;

@interface _MKPlaceBusinessInfoItem : NSObject {

	NSString* _displayString;
	char _isAvailable;
	NSAttributedString* _formattedDisplayString;
	NSFont* _font;
	NSColor* _textColor;

}

@property (nonatomic,readonly) NSAttributedString * displayString; 
+(id)itemWithDescription:(id)arg1 availability:(char)arg2 ;
-(char)isEqual:(id)arg1 ;
-(NSAttributedString *)displayString;
-(void)setFont:(id)arg1 textColor:(id)arg2 ;
@end
