/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOBluetooth/IOBluetooth-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, IOBluetoothDevice, NSArray, IOBluetoothSDPUUID;

@interface IOBluetoothSDPServiceRecord : NSObject <NSCoding, NSSecureCoding> {

	NSDictionary* mAttributeDictionary;
	IOBluetoothDevice* mDeviceForService;
	NSArray* sortedAttributes;

}

@property (copy) NSDictionary * attributes; 
@property (retain) IOBluetoothDevice * device; 
@property (copy) NSArray * sortedAttributes; 
@property (readonly) IOBluetoothSDPUUID * serviceUUID; 
+(id)publishedServiceRecordWithDictionary:(id)arg1 ;
+(char)supportsSecureCoding;
+(id)withServiceDictionary:(id)arg1 device:(id)arg2 ;
+(id)withSDPServiceRecordRef:(OpaqueIOBluetoothObjectRefRef)arg1 ;
-(id)initWithServiceDictionary:(id)arg1 device:(id)arg2 ;
-(void)setSortedAttributes:(NSArray *)arg1 ;
-(int)removeServiceRecord;
-(OpaqueIOBluetoothObjectRefRef)getSDPServiceRecordRef;
-(char)usesL2CAPPSM:(unsigned short)arg1 ;
-(char)usesRFCOMMChannelID:(unsigned char)arg1 ;
-(unsigned short)handsFreeSupportedFeatures;
-(oneway void)release;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(IOBluetoothDevice *)device;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(IOBluetoothSDPUUID *)serviceUUID;
-(id)shortDescription;
-(void)setDevice:(IOBluetoothDevice *)arg1 ;
-(id)getDevice;
-(char)hasServiceFromArray:(id)arg1 ;
-(int)getL2CAPPSM:(unsigned short*)arg1 ;
-(int)getRFCOMMChannelID:(char*)arg1 ;
-(char)matchesSearchArray:(id)arg1 ;
-(id)getServiceName;
-(id)getAttributeDataElement:(unsigned short)arg1 ;
-(char)matchesUUIDArray:(id)arg1 ;
-(id)getAttributes;
-(int)getServiceRecordHandle:(unsigned*)arg1 ;
-(char)matchesUUID16:(unsigned short)arg1 ;
-(NSArray *)sortedAttributes;
@end

