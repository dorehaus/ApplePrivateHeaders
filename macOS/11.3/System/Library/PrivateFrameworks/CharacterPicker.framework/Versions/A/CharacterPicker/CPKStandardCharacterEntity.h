/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPKCharacterEntity.h>

@class NSString;

@interface CPKStandardCharacterEntity : NSObject <CPKCharacterEntity> {

	id _data;
	unsigned long long _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)characterEntity;
+(id)characterEntityWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(id)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)image;
-(id)fontName;
-(void)setFontName:(id)arg1 ;
-(unsigned)glyphID;
-(void)setGlyph:(unsigned)arg1 ;
-(id)imageURL;
-(void)setImageURL:(id)arg1 ;
-(void)setCharacterString:(id)arg1 ;
-(id)characterString;
-(void)setNumberOfSectionedCharacters:(long long)arg1 ;
-(void)_updateSpecificFlags:(unsigned long long)arg1 ;
-(id)characterDescription;
-(id)attributedStringOfSize:(double)arg1 ;
-(id)textEquivalent;
-(id)displayFont;
-(void)setCachedGlyph:(unsigned)arg1 ;
-(unsigned)cachedGlyphID;
-(void)setCharacterDescription:(id)arg1 ;
-(long long)numberOfSectionedCharacters;
-(double)baselineAdjustment;
@end

