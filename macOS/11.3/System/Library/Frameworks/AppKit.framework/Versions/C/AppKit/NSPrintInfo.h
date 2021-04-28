/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary, NSString, NSPrinter;

@interface NSPrintInfo : NSObject <NSSecureCoding, NSCopying, NSCoding> {

	NSMutableDictionary* _attributes;
	id _moreVars;

}

@property (copy) NSString * paperName; 
@property (assign) CGSize paperSize; 
@property (assign) long long orientation; 
@property (assign) double scalingFactor; 
@property (assign) double leftMargin; 
@property (assign) double rightMargin; 
@property (assign) double topMargin; 
@property (assign) double bottomMargin; 
@property (getter=isHorizontallyCentered) char horizontallyCentered; 
@property (getter=isVerticallyCentered) char verticallyCentered; 
@property (assign) unsigned long long horizontalPagination; 
@property (assign) unsigned long long verticalPagination; 
@property (copy) NSString * jobDisposition; 
@property (copy) NSPrinter * printer; 
@property (readonly) CGRect imageablePageBounds; 
@property (copy,readonly) NSString * localizedPaperName; 
@property (readonly) NSMutableDictionary * printSettings; 
@property (getter=isSelectionOnly) char selectionOnly; 
+(void)initialize;
+(char)supportsSecureCoding;
+(id)sharedPrintInfo;
+(id)_pageFormatAttributeKeys;
+(id)_printSettingsAttributeKeys;
+(id)allowedAttributeClasses;
+(void)_setOrientation:(long long)arg1 inPageFormat:(OpaquePMPageFormatRef)arg2 ;
+(void)setSharedPrintInfo:(id)arg1 ;
+(id)defaultPrinter;
+(void)setDefaultPrinter:(id)arg1 ;
+(CGSize)sizeForPaperName:(id)arg1 ;
+(id)_printerInPrintSession:(OpaquePMPrintSessionRef)arg1 ;
+(void)_setPaperSize:(CGSize)arg1 inPrintSession:(OpaquePMPrintSessionRef)arg2 pageFormat:(OpaquePMPageFormatRef)arg3 ;
+(void)_setJobDisposition:(id)arg1 format:(id)arg2 saveURL:(id)arg3 inPrintSession:(OpaquePMPrintSessionRef)arg4 printSettings:(OpaquePMPrintSettingsRef)arg5 ;
+(void)_setJobDisposition:(id)arg1 saveURL:(id)arg2 inPrintSession:(OpaquePMPrintSessionRef)arg3 printSettings:(OpaquePMPrintSettingsRef)arg4 ;
+(id)_printSessionAttributeKeys;
+(void)_setPrinter:(id)arg1 inPrintSession:(OpaquePMPrintSessionRef)arg2 ;
+(void)_setPaperName:(id)arg1 inPrintSession:(OpaquePMPrintSessionRef)arg2 pageFormat:(OpaquePMPageFormatRef)arg3 ;
+(id)_jobSavingURLInPrintSession:(OpaquePMPrintSessionRef)arg1 printSettings:(OpaquePMPrintSettingsRef)arg2 ;
+(id)_jobDispositionInPrintSession:(OpaquePMPrintSessionRef)arg1 printSettings:(OpaquePMPrintSettingsRef)arg2 ;
+(void)_setJobDisposition:(id)arg1 savePath:(id)arg2 inPrintSession:(OpaquePMPrintSessionRef)arg3 printSettings:(OpaquePMPrintSettingsRef)arg4 ;
+(id)_managedAttributeKeys;
+(id)_paperNameInPageFormat:(OpaquePMPageFormatRef)arg1 ;
+(CGSize)_paperSizeInPageFormat:(OpaquePMPageFormatRef)arg1 ;
+(unsigned long long)_orientationInPageFormat:(OpaquePMPageFormatRef)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(CGSize)paperSize;
-(void)setPaperSize:(CGSize)arg1 ;
-(void)_pageFormatWasEdited;
-(void)_setPrintInfo:(id)arg1 ;
-(NSMutableDictionary *)printSettings;
-(void)_setAttributesNoCopy:(id)arg1 pageFormat:(OpaquePMPageFormatRef)arg2 orFlattenedData:(id)arg3 printSettings:(OpaquePMPrintSettingsRef)arg4 orFlattenedData:(id)arg5 ;
-(void)_setFloat:(float)arg1 ifNoAttributeForKey:(id)arg2 ;
-(void)_setBool:(char)arg1 ifNoAttributeForKey:(id)arg2 ;
-(void)_setInt:(int)arg1 ifNoAttributeForKey:(id)arg2 ;
-(id)_initWithAttributesNoCopy:(id)arg1 flattenedPageFormatData:(id)arg2 printSettingsData:(id)arg3 ;
-(void)_validatePaginationAttributes;
-(void)_setObject:(id)arg1 forAttributeKey:(id)arg2 ;
-(id)_objectForAttributeKey:(id)arg1 ;
-(void)_setObject:(id)arg1 ifNoAttributeForKey:(id)arg2 ;
-(OpaquePMPageFormatRef)_pageFormatForGetting;
-(NSPrinter *)printer;
-(OpaquePMPrintSessionRef)_printSessionForGetting;
-(OpaquePMPrintSettingsRef)_printSettingsForGetting;
-(void)setPaperName:(NSString *)arg1 ;
-(id)_compatibility_initWithUnkeyedCoder:(id)arg1 ;
-(void)setJobDisposition:(NSString *)arg1 ;
-(double)topMargin;
-(double)leftMargin;
-(double)bottomMargin;
-(double)rightMargin;
-(void)_setPageFormat:(OpaquePMPageFormatRef)arg1 ;
-(void)_reconcilePrintSettingsAttributes;
-(void*)PMPrintSession;
-(void*)PMPageFormat;
-(void*)PMPrintSettings;
-(OpaquePMPageFormatRef)_pageFormatForSetting;
-(OpaquePMPrintSettingsRef)_printSettingsForSetting;
-(void)_printSettingsWasEdited;
-(void)setScalingFactor:(double)arg1 ;
-(NSString *)paperName;
-(double)scalingFactor;
-(void)setLeftMargin:(double)arg1 ;
-(void)setRightMargin:(double)arg1 ;
-(void)setTopMargin:(double)arg1 ;
-(void)setBottomMargin:(double)arg1 ;
-(void)setHorizontallyCentered:(char)arg1 ;
-(void)setVerticallyCentered:(char)arg1 ;
-(char)isHorizontallyCentered;
-(char)isVerticallyCentered;
-(void)setHorizontalPagination:(unsigned long long)arg1 ;
-(void)setVerticalPagination:(unsigned long long)arg1 ;
-(unsigned long long)horizontalPagination;
-(unsigned long long)verticalPagination;
-(NSString *)jobDisposition;
-(char)isSelectionOnly;
-(void)setSelectionOnly:(char)arg1 ;
-(void)setPrinter:(NSPrinter *)arg1 ;
-(void)setUpPrintOperationDefaultValues;
-(NSString *)localizedPaperName;
-(CGRect)imageablePageBounds;
-(void)updateFromPMPageFormat;
-(void)updateFromPMPrintSettings;
-(void)takeSettingsFromPDFInfo:(id)arg1 ;
-(OpaquePMPrintSessionRef)_printSession;
-(OpaquePMPageFormatRef)_pageFormat;
-(OpaquePMPrintSettingsRef)_printSettings;
-(void)_setPrintSettings:(OpaquePMPrintSettingsRef)arg1 ;
-(void)_reconcilePrintSessionAttributes;
-(void)_createDefaultOrUnflattenPageFormatIfNecessary;
-(void)_reconcilePageFormatAttributes;
-(void)_createDefaultOrUnflattenPrintSettingsIfNecessary;
-(OpaquePMPrintSessionRef)_printSessionForSetting;
-(id)_makePDFInfo;
-(id)_allAttributeKeys;
-(void)_removeObjectForAttributeKey:(id)arg1 ;
@end

