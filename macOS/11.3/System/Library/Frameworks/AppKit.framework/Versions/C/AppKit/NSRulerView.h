/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSScrollView, NSString, NSView, NSMutableArray, NSDictionary, NSRulerMarker, NSArray;

@interface NSRulerView : NSView {

	NSScrollView* _scrollView;
	unsigned long long _orientation;
	NSString* _units;
	double _originOffset;
	double _ruleThickness;
	double _thicknessForMarkers;
	double _thicknessForAccessoryView;
	NSView* _clientView;
	NSMutableArray* _markers;
	NSView* _accessoryView;
	NSDictionary* _cachedHashDict;
	double _cachedDocViewToRulerConversion;
	CGPoint _reservedRulerView2;
	NSRulerMarker* _draggingMarker;
	id _reservedRulerView1;

}

@property (__weak) NSScrollView * scrollView; 
@property (assign) unsigned long long orientation; 
@property (readonly) double baselineLocation; 
@property (readonly) double requiredThickness; 
@property (assign) double ruleThickness; 
@property (assign) double reservedThicknessForMarkers; 
@property (assign) double reservedThicknessForAccessoryView; 
@property (copy) NSString * measurementUnits; 
@property (assign) double originOffset; 
@property (__weak) NSView * clientView; 
@property (copy) NSArray * markers; 
@property (retain) NSView * accessoryView; 
@property (getter=isFlipped,readonly) char flipped; 
+(void)initialize;
+(id)labelColor;
+(char)accessibilityIsSingleCelled;
+(id)separatorColor;
+(id)_registrationDictionaryForUnitNamed:(id)arg1 ;
+(void)_registerUnitWithName:(id)arg1 abbreviation:(id)arg2 unitToPointsConversionFactor:(double)arg3 stepUpCycle:(id)arg4 stepDownCycle:(id)arg5 ;
+(id)_labelCell;
+(id)hashMarkColor;
+(id)rulerLineColor;
+(void)registerUnitWithName:(id)arg1 abbreviation:(id)arg2 unitToPointsConversionFactor:(double)arg3 stepUpCycle:(id)arg4 stepDownCycle:(id)arg5 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOrientation:(unsigned long long)arg1 ;
-(void)setAccessoryView:(NSView *)arg1 ;
-(long long)userInterfaceLayoutDirection;
-(char)isFlipped;
-(void)setFrameSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(void)setUserInterfaceLayoutDirection:(long long)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(NSScrollView *)scrollView;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityHelpStringForChild:(id)arg1 ;
-(char)accessibilityIsChildFocusable:(id)arg1 ;
-(id)accessibilityPositionOfChild:(id)arg1 ;
-(id)accessibilitySizeOfChild:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(id)accessibilityActionNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id)accessibilityChildrenAttribute;
-(NSView *)accessoryView;
-(unsigned long long)orientation;
-(void)drawRect:(CGRect)arg1 ;
-(char)mouseDownCanMoveWindow;
-(void)rightMouseDown:(id)arg1 ;
-(char)accessibilityIsChildrenAttributeSettable;
-(id)accessibilityMinValueAttribute;
-(id)accessibilityMaxValueAttribute;
-(id)accessibilityOrientationAttribute;
-(char)accessibilityIsOrientationAttributeSettable;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)_commonInit;
-(void)viewDidEndLiveResize;
-(NSView *)clientView;
-(double)baselineLocation;
-(NSString *)measurementUnits;
-(void)_setDraggingMarker:(id)arg1 ;
-(char)displaysTooltips;
-(void)addMarker:(id)arg1 ;
-(void)removeMarker:(id)arg1 ;
-(double)_unitsForClientLocation:(double)arg1 ;
-(double)_unitsForRulerLocation:(double)arg1 ;
-(id)initWithScrollView:(id)arg1 orientation:(unsigned long long)arg2 ;
-(void)invalidateHashMarks;
-(CGRect)_ruleAreaRect;
-(char)_isAccessoryViewHostMode;
-(void)setMarkers:(NSArray *)arg1 ;
-(void)setReservedThicknessForMarkers:(double)arg1 ;
-(CGRect)_markerAreaRect;
-(void)setReservedThicknessForAccessoryView:(double)arg1 ;
-(CGRect)_rulerAccessoryViewAreaRect;
-(CGRect)_centerScanSeparatorRect:(CGRect)arg1 ;
-(CGPoint)_rulerOrigin;
-(CGRect)_maxRuleAreaRect;
-(id)_hashMarkDictionary;
-(id)labelStringForValue:(id)arg1 ;
-(void)setLabelString:(id)arg1 forValue:(id)arg2 ;
-(void)_drawContentRect:(CGRect)arg1 ;
-(void)drawSeparatorInRect:(CGRect)arg1 ;
-(void)drawHashMarksAndLabelsInRect:(CGRect)arg1 ;
-(void)drawRulerLines;
-(void)drawMarkersInRect:(CGRect)arg1 ;
-(id)_markerHitTest:(CGPoint)arg1 ;
-(void)setScrollView:(NSScrollView *)arg1 ;
-(double)requiredThickness;
-(void)setRuleThickness:(double)arg1 ;
-(double)ruleThickness;
-(double)reservedThicknessForMarkers;
-(double)reservedThicknessForAccessoryView;
-(void)setMeasurementUnits:(NSString *)arg1 ;
-(void)setOriginOffset:(double)arg1 ;
-(double)originOffset;
-(void)setClientView:(NSView *)arg1 ;
-(NSArray *)markers;
-(char)trackMarker:(id)arg1 withMouseEvent:(id)arg2 ;
-(void)moveRulerlineFromLocation:(double)arg1 toLocation:(double)arg2 ;
-(CGRect)_rectWithSingleThickness:(CGRect)arg1 ;
-(void)_addMarker:(id)arg1 ;
-(void)_cancelAddMarker:(id)arg1 ;
-(double)_locationFromUnitsValue:(double)arg1 ;
-(id)testPart:(CGPoint)arg1 ;
-(id)accessibilityUnitsAttribute;
-(char)accessibilityIsUnitsAttributeSettable;
-(id)accessibilityUnitDescriptionAttribute;
-(char)accessibilityIsUnitDescriptionAttributeSettable;
-(id)accessibilityMarkerUIElementsAttribute;
-(char)accessibilityIsMarkerUIElementsAttributeSettable;
-(id)_hashMarkDictionaryForDocumentView:(id)arg1 measurementUnitName:(id)arg2 ;
-(id)_hashMarkDictionaryForDocView:(id)arg1 measurementUnitToBoundsConversionFactor:(double)arg2 stepUpCycle:(id)arg3 stepDownCycle:(id)arg4 minimumHashSpacing:(double)arg5 minimumLabelSpacing:(double)arg6 ;
-(id)_draggingMarkerView;
-(CGRect)_ruleAreaMarginRect;
-(void)setDisplaysTooltips:(char)arg1 ;
-(void)_scrollToMatchContentView;
-(void)_setAccessoryViewHostMode:(char)arg1 ;
@end

