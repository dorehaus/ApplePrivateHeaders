/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Network.framework/Versions/A/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_advertise_descriptor;
#import <Network/Network-Structs.h>
@class NSObject, NSString, NSData;

@interface NWAdvertiseDescriptor : NSObject {

	NSObject*<OS_nw_advertise_descriptor> _internalDescriptor;

}

@property (nonatomic,retain) NSObject*<OS_nw_advertise_descriptor> internalDescriptor;              //@synthesize internalDescriptor=_internalDescriptor - In the implementation block
@property (nonatomic,readonly) NSString * bonjourServiceDomain; 
@property (nonatomic,readonly) NSString * bonjourServiceType; 
@property (nonatomic,readonly) NSString * bonjourServiceName; 
@property (nonatomic,retain) NSData * txtRecord; 
-(id)descriptionWithIndent:(int)arg1 showFullContent:(char)arg2 ;
-(id)initWithName:(id)arg1 type:(id)arg2 domain:(id)arg3 ;
-(NSString *)bonjourServiceDomain;
-(NSObject*<OS_nw_advertise_descriptor>)internalDescriptor;
-(void)setInternalDescriptor:(NSObject*<OS_nw_advertise_descriptor>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)txtRecord;
-(void)setTxtRecord:(NSData *)arg1 ;
-(id)initWithDescriptor:(id)arg1 ;
-(id)privateDescription;
-(NSString *)bonjourServiceType;
-(NSString *)bonjourServiceName;
@end

