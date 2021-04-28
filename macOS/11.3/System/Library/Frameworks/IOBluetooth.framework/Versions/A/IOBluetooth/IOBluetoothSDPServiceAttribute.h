/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class IOBluetoothSDPDataElement;

@interface IOBluetoothSDPServiceAttribute : NSObject <NSCoding, NSSecureCoding> {

	unsigned short mAttributeID;
	IOBluetoothSDPDataElement* mAttributeDataElement;
	IOBluetoothSDPDataElement* mAttributeIDDataElement;
	void* _mReserved;

}
+(char)supportsSecureCoding;
+(id)withID:(unsigned short)arg1 attributeElementValue:(id)arg2 ;
+(id)withID:(unsigned short)arg1 attributeElement:(id)arg2 ;
-(id)getIDDataElement;
-(id)initWithID:(unsigned short)arg1 attributeElementValue:(id)arg2 ;
-(id)initWithID:(unsigned short)arg1 attributeElement:(id)arg2 ;
-(unsigned short)getAttributeID;
-(char)encodeAttribute:(char*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)getDataElement;
-(unsigned)getEncodedSize;
-(long long)compareAttributeID:(id)arg1 ;
@end

