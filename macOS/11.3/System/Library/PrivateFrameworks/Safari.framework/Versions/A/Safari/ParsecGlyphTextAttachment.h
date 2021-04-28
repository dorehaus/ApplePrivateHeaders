/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/NSTextAttachment.h>
#import <libobjc.A.dylib/ParsecHighlightableTextAttachment.h>

@class NSImage, NSString;

@interface ParsecGlyphTextAttachment : NSTextAttachment <ParsecHighlightableTextAttachment> {

	char _shouldSkipHighlighting;

}

@property (nonatomic,retain) NSImage * glyph; 
@property (assign,nonatomic) char shouldSkipHighlighting;              //@synthesize shouldSkipHighlighting=_shouldSkipHighlighting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSImage *)glyph;
-(void)setGlyph:(NSImage *)arg1 ;
-(id)highlightedCopyWithHighlightColor:(id)arg1 ;
-(char)shouldSkipHighlighting;
-(void)setShouldSkipHighlighting:(char)arg1 ;
-(id)_initWithGlyph:(id)arg1 highlightColor:(id)arg2 ;
-(id)initWithGlyph:(id)arg1 ;
@end

