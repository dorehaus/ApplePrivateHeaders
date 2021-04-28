/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeyboardServices/KeyboardServices-Structs.h>
#import <KeyboardServices/_KSFileEntry.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableDictionary, NSArray;

@interface _KSFileDirectory : _KSFileEntry <NSSecureCoding, NSFastEnumeration> {

	NSMutableDictionary* _contents;

}

@property (nonatomic,retain,readonly) NSArray * contents; 
+(char)supportsSecureCoding;
-(id)description;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_KS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addEntry:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSArray *)contents;
-(void)consistencyCheck;
-(void)removeEntryWithName:(id)arg1 ;
-(id)entryForName:(id)arg1 ;
-(void)performOnEverything:(/*^block*/id)arg1 ;
-(void)restoreToPath:(id)arg1 ;
-(id)initWithDirectory:(id)arg1 captureContents:(char)arg2 storeRoot:(char)arg3 ;
-(id)findEntryWithComparison:(/*^block*/id)arg1 recursively:(char)arg2 ;
@end

