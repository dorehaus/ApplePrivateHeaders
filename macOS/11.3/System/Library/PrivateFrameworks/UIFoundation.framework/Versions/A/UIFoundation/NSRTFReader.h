/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSMutableAttributedString, NSMutableArray, NSMutableDictionary, NSData, NSFileWrapper, NSMutableData, NSMapTable, NSColor, NSArray, NSTextTable, NSCalendar;

@interface NSRTFReader : NSObject {

	NSMutableAttributedString* _topAttributedString;
	NSMutableAttributedString* _curAttributedString;
	NSMutableArray* _attributesStack;
	NSMutableDictionary* _curAttributes;
	unsigned _level;
	NSData* _rtfData;
	NSMutableDictionary* _fontTable;
	NSFileWrapper* _document;
	SCD_Union_NS41 _textBuffer;
	unsigned long long _textBufferIndex;
	int _rtfVersion;
	int _cocoaVersion;
	int _cocoaSubVersion;
	int _readOnly;
	int _usesScreenFonts;
	int _colorTblColorSpace;
	unsigned _defaultToUniCharEncoding;
	NSAttributeInfo _attributeInfo;
	NSMutableData* _attributeInfoStack;
	CGSize _paperSize;
	double _lMargin;
	double _rMargin;
	double _bMargin;
	double _tMargin;
	NSMutableDictionary* _documentInfoDictionary;
	CGSize _viewSize;
	int _viewScale;
	int _viewKind;
	NSMapTable* _cachedRTFFontTable;
	double _hyphenationFactor;
	double _defaultTabInterval;
	NSColor* _documentBackgroundColor;
	NSRTFPriv* _private;
	char _textBufferContentsIsFat;
	char _explicitCharSetEncountered;
	char _isRTLDocument;
	long long _readLimit;
	long long _thumbnailLimit;
	char _limitReached;
	unsigned char _textFlow;
	NSMutableArray* _layoutOrientationSections;
	unsigned long long _verticalOrientationLocation;
	NSArray* _textBlocks;
	NSMutableArray* _nestedTables;
	NSTextTable* _currentTable;
	NSTextTable* _previousTable;
	NSMutableArray* _currentRowArray;
	NSMutableArray* _previousRowArray;
	int _currentRow;
	int _currentColumn;
	int _currentDefinitionColumn;
	char _currentRowIsLast;
	char _setTableCells;
	unsigned long long _currentBorderEdge;
	char _currentBorderIsTable;
	NSMutableDictionary* _listDefinitions;
	int _currentListNumber;
	int _currentListLevel;
	NSCalendar* _gregorianCalendar;
	NSMutableDictionary* _fontAttributesTable;
	long long _cocoaTextScaling;
	long long _cocoaPlatform;
	long long _targetTextScaling;
	long long _sourceTextScaling;
	long long _finalTextScaling;

}
-(void)finalize;
-(void)dealloc;
-(id)defaultParagraphStyle;
-(void)setBaseWritingDirection:(long long)arg1 ;
-(id)mutableAttributes;
-(id)mutableAttributedString;
-(id)initWithPath:(id)arg1 ;
-(double)defaultTabInterval;
-(long long)baseWritingDirection;
-(void)setDefaultTabInterval:(double)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)attributedString;
-(CGSize)paperSize;
-(void)setPaperSize:(CGSize)arg1 ;
-(void)setLeftMargin:(double)arg1 ;
-(void)setRightMargin:(double)arg1 ;
-(void)setTopMargin:(double)arg1 ;
-(void)setBottomMargin:(double)arg1 ;
-(void)setHyphenationFactor:(float)arg1 ;
-(void)setMutableAttributedString:(id)arg1 ;
-(id)documentAttributes;
-(id)_currentTable;
-(id)initWithRTF:(id)arg1 ;
-(void)_setRTFDFileWrapper:(id)arg1 ;
-(id)initWithRTFDFileWrapper:(id)arg1 ;
-(id)_mutableParagraphStyle;
-(void)_updateAttributes;
-(void)_addListDefinition:(id)arg1 forKey:(long long)arg2 ;
-(id)initWithRTFD:(id)arg1 ;
-(id)_RTFDFileWrapper;
-(void)setReadLimit:(long long)arg1 ;
-(void)setThumbnailLimit:(long long)arg1 ;
-(void)setViewSize:(CGSize)arg1 ;
-(CGSize)viewSize;
-(void)setViewKind:(long long)arg1 ;
-(void)setViewScale:(long long)arg1 ;
-(void)setTextFlow:(unsigned long long)arg1 ;
-(unsigned long long)textFlow;
-(long long)cocoaPlatform;
-(long long)cocoaTextScaling;
-(void)_setTargetTextScaling:(long long)arg1 ;
-(void)_setSourceTextScaling:(long long)arg1 ;
-(id)_currentTableCell;
-(unsigned long long)_currentBorderEdge;
-(char)_currentBorderIsTable;
-(char)_currentTableCellIsPlaceholder;
-(void)_setCurrentBorderEdge:(unsigned long long)arg1 isTable:(char)arg2 ;
-(void)_setTableNestingLevel:(long long)arg1 ;
-(void)_startTableRowDefinition;
-(void)_endTableCellDefinition;
-(void)_paragraphInTable;
-(void)_endTableCell;
-(void)_lastTableRow;
-(void)_endTableRow;
-(void)_mergeTableCellsHorizontally;
-(void)_mergeTableCellsVertically;
-(id)attributedStringToEndOfGroup;
-(id)attributesAtEndOfGroup;
-(long long)_currentListNumber;
-(void)_setCurrentListNumber:(long long)arg1 ;
-(long long)_currentListLevel;
-(void)_setCurrentListLevel:(long long)arg1 ;
-(id)_listDefinitions;
-(void)_addOverride:(long long)arg1 forKey:(long long)arg2 ;
-(void)processString:(id)arg1 ;
-(void)_pushState;
-(void)_popState;
@end

