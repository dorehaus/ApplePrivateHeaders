/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSImageRep.h>

@class CUIRenditionKey, NSAppearance;

@interface NSFacetImageRep : NSImageRep {

	CUIRenditionKey* _renditionKey;
	NSAppearance* _appearance;
	unsigned long long _state;

}

@property (copy) CUIRenditionKey * renditionKey;              //@synthesize renditionKey=_renditionKey - In the implementation block
@property (retain) NSAppearance * appearance;                 //@synthesize appearance=_appearance - In the implementation block
@property (assign) unsigned long long state;                  //@synthesize state=_state - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSAppearance *)appearance;
-(void)setAppearance:(NSAppearance *)arg1 ;
-(char)draw;
-(char)_isValid;
-(char)drawInRect:(CGRect)arg1 ;
-(char)_drawOnlyUsesOneDrawingOperation;
-(void)setRenditionKey:(CUIRenditionKey *)arg1 ;
-(id)_facetForState:(unsigned long long)arg1 ;
-(CUIRenditionKey *)renditionKey;
-(id)initWithBaseRenditionKey:(id)arg1 appearance:(id)arg2 ;
-(char)hasFacetForState:(unsigned long long)arg1 ;
@end

