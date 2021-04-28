/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, _MKMapItemAttribution, NSColor;

@interface MKPlaceCardActionItem : NSObject {

	char _enabled;
	char _selected;
	NSString* _displayString;
	unsigned long long _type;
	NSArray* _urlStrings;
	_MKMapItemAttribution* _attribution;
	NSString* _glyph;
	NSColor* _glyphColor;
	NSColor* _backgroundColor;
	MKPlaceCardActionItem* _selectedItem;
	id _value;

}

@property (nonatomic,copy,readonly) NSString * displayString;                   //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,copy) NSString * glyph;                                    //@synthesize glyph=_glyph - In the implementation block
@property (nonatomic,retain) NSColor * glyphColor;                              //@synthesize glyphColor=_glyphColor - In the implementation block
@property (nonatomic,retain) NSColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) char selected;                                     //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) NSArray * urlStrings;                            //@synthesize urlStrings=_urlStrings - In the implementation block
@property (nonatomic,retain) _MKMapItemAttribution * attribution;               //@synthesize attribution=_attribution - In the implementation block
@property (nonatomic,retain) MKPlaceCardActionItem * selectedItem;              //@synthesize selectedItem=_selectedItem - In the implementation block
@property (nonatomic,retain) id value;                                          //@synthesize value=_value - In the implementation block
-(unsigned long long)type;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(NSColor *)backgroundColor;
-(MKPlaceCardActionItem *)selectedItem;
-(char)selected;
-(void)setSelected:(char)arg1 ;
-(NSString *)displayString;
-(void)setSelectedItem:(MKPlaceCardActionItem *)arg1 ;
-(NSString *)glyph;
-(_MKMapItemAttribution *)attribution;
-(void)setAttribution:(_MKMapItemAttribution *)arg1 ;
-(NSColor *)glyphColor;
-(id)initWithType:(unsigned long long)arg1 displayString:(id)arg2 enabled:(char)arg3 ;
-(NSArray *)urlStrings;
-(id)initWithType:(unsigned long long)arg1 displayString:(id)arg2 enabled:(char)arg3 urlStrings:(id)arg4 attribution:(id)arg5 ;
-(void)setGlyph:(NSString *)arg1 ;
-(void)setGlyphColor:(NSColor *)arg1 ;
@end

