/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSString, NSArray;

@interface NSColorList : NSObject <NSSecureCoding> {

	NSMutableArray* _keyArray;
	NSMutableArray* _colorArray;
	CFDictionaryRef _keyToIndexTable;
	NSString* _name;
	NSString* _printerType;
	NSString* _fileName;
	struct {
		unsigned colorsLoaded : 1;
		unsigned editable : 1;
		unsigned hasDeviceSpecificLists : 1;
		unsigned dirty : 1;
		unsigned hasFrozen : 1;
		unsigned notificationsDisabled : 1;
		unsigned hasAttemptedLoadingBundleForDirectory : 1;
		unsigned isProfileBased : 1;
		unsigned  : 24;
		unsigned  : 32;
	}  _flags;
	id _clAuxiliaryStorage;

}

@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSArray * allKeys; 
@property (getter=isEditable,readonly) char editable; 
+(void)initialize;
+(char)supportsSecureCoding;
+(id)colorListNamed:(id)arg1 ;
+(id)_findColorListNamed:(id)arg1 forDeviceType:(id)arg2 ;
+(id)_newWithName:(id)arg1 fromPath:(id)arg2 forDeviceType:(id)arg3 ;
+(void)_loadSystemScreenColorList;
+(id)_colorListNamed:(id)arg1 forDeviceType:(id)arg2 ;
+(id)availableColorLists;
-(void)dealloc;
-(id)description;
-(id)init;
-(NSString *)name;
-(unsigned long long)_count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)allKeys;
-(id)initWithName:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(char)writeToURL:(id)arg1 error:(id*)arg2 ;
-(char)isEditable;
-(id)colorWithKey:(id)arg1 ;
-(id)_localizedColorListName;
-(id)_localizedNameForColorWithName:(id)arg1 ;
-(id)_initWithName:(id)arg1 fromPath:(id)arg2 forDeviceType:(id)arg3 lazy:(char)arg4 ;
-(char)_loadColors;
-(id)initWithName:(id)arg1 fromFile:(id)arg2 ;
-(void)_decodeWithoutNameWithCoder:(id)arg1 newStyle:(char)arg2 ;
-(void)_rawAddColor:(id)arg1 key:(id)arg2 ;
-(void)_invalidateKeyToIndexTable;
-(char)_parseKeyedArchivedList:(id)arg1 ;
-(char)_parseArchivedList:(id)arg1 ;
-(char)_parseReleaseTwoList:(id)arg1 ;
-(char)_parsePantoneLikeList:(id)arg1 fileName:(id)arg2 ;
-(unsigned long long)_indexOfKey:(id)arg1 ;
-(void)_changed:(id)arg1 ;
-(void)insertColor:(id)arg1 key:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)_localizedKeyFromBundleStringFileForKey:(id)arg1 ;
-(char)_isProfileBased;
-(void)_encodeWithoutNameWithCoder:(id)arg1 newStyle:(char)arg2 ;
-(char)_writeToURL:(id)arg1 keyedArchive:(char)arg2 error:(id*)arg3 ;
-(void)removeFile;
-(char)_rename:(id)arg1 as:(id)arg2 ;
-(void)setColor:(id)arg1 forKey:(id)arg2 ;
-(void)removeColorWithKey:(id)arg1 ;
-(id)_localizedColorListCopyrightString;
-(void)_setUpdated:(char)arg1 ;
-(char)_isUpdated;
-(char)writeToFile:(id)arg1 ;
-(unsigned long long)_pageForIndex:(unsigned long long)arg1 ;
-(id)_initWithName:(id)arg1 fromColorSyncProfileRef:(id)arg2 ;
-(id)_colorAtIndex:(unsigned long long)arg1 ;
-(id)_nameAtIndex:(unsigned long long)arg1 ;
-(char)_isPaged;
-(unsigned long long)_pageCount;
-(SCD_Struct_NS41)_infoForPage:(unsigned long long)arg1 ;
@end

