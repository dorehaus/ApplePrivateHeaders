/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityFoundation.framework/Versions/A/AccessibilityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityFoundation/AccessibilityFoundation-Structs.h>
#import <AccessibilityFoundation/AXFTextPosition.h>

@class AXFUIElement;

@interface _AXFTextPositionMarkerBased : AXFTextPosition {

	AXTextMarkerRef _marker;
	AXFUIElement* __webAreaUIElement;

}

@property (nonatomic,retain) AXFUIElement * _webAreaUIElement;              //@synthesize _webAreaUIElement=__webAreaUIElement - In the implementation block
-(id)descriptionWithoutType;
-(char)isCompatibleWithPosition:(id)arg1 ;
-(const AXTextMarkerRef)axTextMarkerValue;
-(AXFUIElement *)_webAreaUIElement;
-(long long)_distanceBetweenTextMarker:(AXTextMarkerRef)arg1 andTextMarker:(AXTextMarkerRef)arg2 ;
-(id)_initWithMarker:(AXTextMarkerRef)arg1 webAreaUIElement:(id)arg2 ;
-(char)isEqualToAXFTextPositionMarkerBased:(id)arg1 ;
-(char)isVisuallyEqual:(id)arg1 ;
-(void)set_webAreaUIElement:(AXFUIElement *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(char)isValid;
-(long long)compare:(id)arg1 ;
-(long long)type;
-(long long)indexValue;
-(id)positionOffsetBy:(long long)arg1 withinLimit:(id)arg2 ;
-(long long)offsetFromPosition:(id)arg1 ;
@end
