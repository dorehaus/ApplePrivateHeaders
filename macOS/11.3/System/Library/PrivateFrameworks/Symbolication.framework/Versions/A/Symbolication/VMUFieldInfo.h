/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, VMUClassInfo, NSMutableArray, NSArray;

@interface VMUFieldInfo : NSObject {

	NSString* _ivarName;
	NSString* _typeName;
	unsigned _scanType;
	unsigned _offset;
	unsigned _size;
	unsigned _scannable;
	unsigned _stride;
	unsigned _flags;
	VMUClassInfo* _destinationLayout;
	NSMutableArray* _subFieldArray;
	void* _swiftTyperef;

}

@property (nonatomic,readonly) unsigned flags;                                //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) char isCapture; 
@property (nonatomic,readonly) char isByref; 
@property (nonatomic,readonly) char isStorageImplPointer; 
@property (nonatomic,readonly) char isArraySize; 
@property (nonatomic,readonly) char isArrayEntries; 
@property (nonatomic,readonly) char isStorageBitmapPointer; 
@property (nonatomic,readonly) char isKeysPointer; 
@property (nonatomic,readonly) char isValuesPointer; 
@property (nonatomic,readonly) char isValueField; 
@property (nonatomic,readonly) char isKeyField; 
@property (readonly) void* swiftTyperef;                                      //@synthesize swiftTyperef=_swiftTyperef - In the implementation block
@property (readonly) NSString * typedDescription; 
@property (nonatomic,readonly) NSString * ivarName;                           //@synthesize ivarName=_ivarName - In the implementation block
@property (nonatomic,readonly) NSString * typeName;                           //@synthesize typeName=_typeName - In the implementation block
@property (readonly) unsigned scanType;                                       //@synthesize scanType=_scanType - In the implementation block
@property (readonly) unsigned offset;                                         //@synthesize offset=_offset - In the implementation block
@property (readonly) unsigned size;                                           //@synthesize size=_size - In the implementation block
@property (readonly) unsigned scannableSize;                                  //@synthesize scannable=_scannable - In the implementation block
@property (readonly) unsigned stride;                                         //@synthesize stride=_stride - In the implementation block
@property (readonly) unsigned bitfieldWidth; 
@property (nonatomic,readonly) VMUClassInfo * destinationLayout; 
@property (nonatomic,readonly) NSArray * subFieldArray; 
-(unsigned)flags;
-(unsigned)size;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)mutableCopy;
-(unsigned)offset;
-(unsigned)stride;
-(char)isByref;
-(NSString *)typeName;
-(unsigned)scanType;
-(void)_setFlags:(unsigned)arg1 ;
-(void)_setSize:(unsigned)arg1 ;
-(id)fullIvarNameAtOffset:(unsigned)arg1 ;
-(NSString *)ivarName;
-(id)getLeafFieldAtOffset:(unsigned)arg1 leafOffset:(unsigned*)arg2 ;
-(id)initWithName:(id)arg1 type:(id)arg2 scan:(unsigned)arg3 offset:(unsigned)arg4 size:(unsigned)arg5 ;
-(id)initWithObjcIvar:(objc_ivarRef)arg1 size:(unsigned)arg2 isARC:(char)arg3 is64Bit:(char)arg4 ;
-(id)initWithSerializer:(id)arg1 classMap:(id)arg2 version:(unsigned)arg3 error:(id*)arg4 ;
-(VMUClassInfo *)destinationLayout;
-(unsigned)scannableSize;
-(char)isArraySize;
-(char)isArrayEntries;
-(char)isStorageImplPointer;
-(char)isStorageBitmapPointer;
-(char)isKeysPointer;
-(char)isValuesPointer;
-(char)isKeyField;
-(char)isValueField;
-(NSArray *)subFieldArray;
-(void)serializeWithClassMap:(id)arg1 simpleSerializer:(id)arg2 version:(unsigned)arg3 ;
-(id)initWithName:(id)arg1 type:(id)arg2 kind:(unsigned)arg3 scan:(unsigned)arg4 offset:(unsigned)arg5 size:(unsigned)arg6 stride:(unsigned)arg7 subFieldArray:(id)arg8 swiftTyperef:(void*)arg9 ;
-(char)isCapture;
-(id)initWithSerializer:(id)arg1 classMap:(id)arg2 version:(unsigned)arg3 returnedDestinationLayoutClassInfoIndex:(unsigned*)arg4 error:(id*)arg5 ;
-(id)_getFieldAtOffset:(unsigned)arg1 ;
-(id)_fullIvarNameAtOffset:(unsigned)arg1 leafOffset:(unsigned*)arg2 depth:(unsigned)arg3 ;
-(NSString *)typedDescription;
-(void)initializeSubFieldArray;
-(id)initStorageInfoFieldWithName:(id)arg1 type:(id)arg2 kind:(unsigned)arg3 scan:(unsigned)arg4 offset:(unsigned)arg5 size:(unsigned)arg6 stride:(unsigned)arg7 subFieldArray:(id)arg8 ;
-(id)initStorageEntryFieldWithName:(id)arg1 type:(id)arg2 kind:(unsigned)arg3 scan:(unsigned)arg4 offset:(unsigned)arg5 size:(unsigned)arg6 stride:(unsigned)arg7 subFieldArray:(id)arg8 ;
-(void)_setIvarName:(id)arg1 ;
-(void)_setTypeName:(id)arg1 ;
-(void)_setScanType:(unsigned)arg1 ;
-(void)_setOffset:(unsigned)arg1 ;
-(unsigned)bitfieldWidth;
-(void)_setScannableSize:(unsigned)arg1 ;
-(void)_setStride:(unsigned)arg1 ;
-(void)_setDestinationLayout:(id)arg1 ;
-(id)descriptionOfFieldValueInObjectMemory:(void*)arg1 scanner:(id)arg2 ;
-(void*)swiftTyperef;
@end
