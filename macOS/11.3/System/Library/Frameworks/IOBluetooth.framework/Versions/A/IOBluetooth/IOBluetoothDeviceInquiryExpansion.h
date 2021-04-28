/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSXPCConnection;

@interface IOBluetoothDeviceInquiryExpansion : NSObject {

	NSArray* _searchUUIDs;
	int searchType;
	char joinedToDaemon;
	char rssiThreshold;
	char supportsSecureCoding;
	NSXPCConnection* xpcConnection;

}

@property (copy) NSArray * searchUUIDs;                          //@synthesize searchUUIDs=_searchUUIDs - In the implementation block
@property (assign) int searchType; 
@property (assign) char joinedToDaemon; 
@property (assign) char rssiThreshold; 
@property (assign) char supportsSecureCoding; 
@property (retain) NSXPCConnection * xpcConnection; 
+(char)supportsSecureCoding;
-(void)setSearchUUIDs:(NSArray *)arg1 ;
-(NSArray *)searchUUIDs;
-(char)joinedToDaemon;
-(void)setJoinedToDaemon:(char)arg1 ;
-(void)dealloc;
-(char)supportsSecureCoding;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(char)rssiThreshold;
-(void)setRssiThreshold:(char)arg1 ;
-(void)setSearchType:(int)arg1 ;
-(int)searchType;
-(void)setSupportsSecureCoding:(char)arg1 ;
@end
