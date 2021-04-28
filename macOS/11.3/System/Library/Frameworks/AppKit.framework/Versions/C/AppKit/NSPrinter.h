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

@class NSString, NSDictionary;

@interface NSPrinter : NSObject <NSSecureCoding, NSCopying, NSCoding> {

	NSString* _printerName;
	void* _printer;
	NSDictionary* _cachedDeviceDescription;
	int _ppdCreationNum;
	void* _ppdNodes;
	void* _ppdPriv;

}

@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * type; 
@property (readonly) long long languageLevel; 
@property (copy,readonly) NSDictionary * deviceDescription; 
+(char)supportsSecureCoding;
+(id)_printerForPrinter:(OpaquePMPrinterRef)arg1 ;
+(id)printerWithName:(id)arg1 ;
+(void)_flushCachedCarbonPrintersByName;
+(id)printerNames;
+(id)printerTypes;
+(id)printerWithType:(id)arg1 ;
+(id)printerWithName:(id)arg1 domain:(id)arg2 includeUnavailable:(char)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(NSString *)name;
-(id)domain;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(id)host;
-(NSDictionary *)deviceDescription;
-(id)processKeyword:(char*)arg1 option:(char*)arg2 keyTran:(char*)arg3 arg:(char*)arg4 argTran:(char*)arg5 ;
-(OpaquePMPrinterRef)_printer;
-(id)_compatibility_initWithUnkeyedCoder:(id)arg1 ;
-(CGSize)pageSizeForPaper:(id)arg1 ;
-(id)_initWithName:(id)arg1 printer:(OpaquePMPrinterRef)arg2 ;
-(void)_deallocatePPDStuff;
-(CGSize)sizeForKey:(id)arg1 inTable:(id)arg2 ;
-(SCD_Struct_NS84*)_getNodeForKey:(id)arg1 inTable:(id)arg2 ;
-(id)stringForKey:(id)arg1 inTable:(id)arg2 ;
-(id)_keyListForKeyNode:(SCD_Struct_NS84*)arg1 ;
-(long long)languageLevel;
-(unsigned long long)statusForTable:(id)arg1 ;
-(char)isKey:(id)arg1 inTable:(id)arg2 ;
-(char)booleanForKey:(id)arg1 inTable:(id)arg2 ;
-(float)floatForKey:(id)arg1 inTable:(id)arg2 ;
-(int)intForKey:(id)arg1 inTable:(id)arg2 ;
-(CGRect)rectForKey:(id)arg1 inTable:(id)arg2 ;
-(id)stringListForKey:(id)arg1 inTable:(id)arg2 ;
-(CGRect)imageRectForPaper:(id)arg1 ;
-(char)acceptsBinary;
-(char)isColor;
-(char)isFontAvailable:(id)arg1 ;
-(char)isOutputStackInReverseOrder;
-(id)note;
-(SCD_Struct_NS84*)_newNode:(long long)arg1 ;
-(id)_freeNode:(SCD_Struct_NS84*)arg1 ;
-(char*)_allocString:(const char*)arg1 ;
-(id)_makeRootNode;
-(SCD_Struct_NS84*)_makeTable:(const char*)arg1 inNode:(SCD_Struct_NS84*)arg2 ;
-(id)_freeNodes;
-(void)_allocatePPDStuffAndParse;
-(id)_appendStringInKeyNode:(SCD_Struct_NS84*)arg1 key:(const char*)arg2 value:(const char*)arg3 ;
-(SCD_Struct_NS84*)_makeKeyNode:(const char*)arg1 inKeyNode:(SCD_Struct_NS84*)arg2 ;
-(id)_appendKey:(const char*)arg1 option:(const char*)arg2 value:(const char*)arg3 inKeyNode:(SCD_Struct_NS84*)arg4 ;
-(id)_setOrderDependency:(char*)arg1 ;
-(id)_setUIConstraints:(char*)arg1 ;
@end

