/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@class NSColor, NSFont;

@interface AKAnnotationTheme : NSObject {

	int _pageTheme;

}

@property (assign,nonatomic) int pageTheme;                                         //@synthesize pageTheme=_pageTheme - In the implementation block
@property (nonatomic,readonly) int annotationStyle; 
@property (nonatomic,readonly) char isUnderline; 
@property (nonatomic,readonly) NSColor * highlightColor; 
@property (nonatomic,readonly) NSColor * noteFillColor; 
@property (nonatomic,readonly) NSColor * noteBorderColor; 
@property (nonatomic,readonly) double noteShadowRadius; 
@property (nonatomic,readonly) double noteShadowOpacity; 
@property (nonatomic,readonly) NSColor * noteShadowColor; 
@property (nonatomic,readonly) CGSize noteShadowOffset; 
@property (nonatomic,readonly) NSColor * notesSidebarBarColor; 
@property (nonatomic,readonly) NSColor * notesSidebarTextColor; 
@property (nonatomic,readonly) NSFont * noteTextFont; 
@property (nonatomic,readonly) NSFont * noteTextFontInTable; 
@property (nonatomic,readonly) NSColor * noteTextColor; 
@property (nonatomic,readonly) NSColor * noteMarkerFillColor; 
@property (nonatomic,readonly) NSColor * noteMarkerBorderColor; 
@property (nonatomic,readonly) NSColor * noteMarkerStrikethroughColor; 
+(id)themeForAnnotationStyle:(int)arg1 pageTheme:(int)arg2 isUnderline:(char)arg3 ;
+(id)themeForAnnotationStyle:(int)arg1 pageTheme:(int)arg2 ;
+(id)yellowTheme:(int)arg1 ;
+(id)greenTheme:(int)arg1 ;
+(id)blueTheme:(int)arg1 ;
+(id)pinkTheme:(int)arg1 ;
+(id)purpleTheme:(int)arg1 ;
+(id)underlineTheme:(int)arg1 ;
+(id)themeDescriptions;
+(id)themeItemForAnnotationStyle:(int)arg1 propertyName:(id)arg2 ;
+(id)colorForThemeItem:(id)arg1 pageTheme:(int)arg2 ;
+(id)colorForAnnotationStyle:(int)arg1 propertyName:(id)arg2 pageTheme:(int)arg3 ;
+(id)theme:(int)arg1 ;
+(id)highlightTextColor:(int)arg1 ;
-(NSColor *)highlightColor;
-(NSColor *)noteFillColor;
-(NSColor *)noteBorderColor;
-(NSColor *)noteMarkerBorderColor;
-(NSColor *)noteMarkerFillColor;
-(int)pageTheme;
-(int)annotationStyle;
-(NSColor *)noteTextColor;
-(NSColor *)notesSidebarBarColor;
-(char)isUnderline;
-(void)setPageTheme:(int)arg1 ;
-(NSColor *)noteMarkerStrikethroughColor;
-(NSColor *)notesSidebarTextColor;
-(double)noteShadowRadius;
-(double)noteShadowOpacity;
-(NSColor *)noteShadowColor;
-(CGSize)noteShadowOffset;
-(NSFont *)noteTextFont;
-(NSFont *)noteTextFontInTable;
@end

