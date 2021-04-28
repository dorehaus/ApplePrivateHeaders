/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOBluetooth/IOBluetooth-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface IOBluetoothObject : NSObject <NSCopying> {

	unsigned mIOService;
	unsigned mIOConnection;
	unsigned mIONotification;

}
+(id)getAllUniqueObjects;
+(id)withIOService:(unsigned)arg1 ;
+(id)getUniqueObjectDictionary:(char)arg1 ;
+(id)getKeyForIOService:(unsigned)arg1 ;
+(id)getUniqueObjectWithIOService:(unsigned)arg1 ;
+(void)removeUniqueObject:(id)arg1 ;
+(void)uniqueObjectDictionaryEmpty;
+(void)initialize;
+(void)addUniqueObject:(id)arg1 ;
+(id)getUniqueObjectWithKey:(id)arg1 ;
-(void)setIOService:(unsigned)arg1 ;
-(int)establishKernelConnection;
-(id)initWithIOService:(unsigned)arg1 ;
-(void)updateFromNewIOService:(unsigned)arg1 ;
-(char)ioServiceTerminated:(unsigned)arg1 ;
-(int)unregisterForServiceRemovalNotification;
-(int)registerForServiceRemovalNotification;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)init;
-(char)isValid;
-(id)getKey;
-(unsigned)getIOService;
-(int)closeKernelConnection;
@end

