/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ISSupport.framework/Versions/A/ISSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ISS_DAVXMLNode, NSMutableArray, NSMutableData;

@interface ISS_DAVXMLTree : NSObject {

	ISS_DAVXMLNode* root;
	NSMutableArray* stack;
	NSMutableData* contentData;

}
+(void)initialize;
+(id)treeWithXMLData:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)root;
-(id)initWithXMLData:(id)arg1 ;
-(void)_startelement:(const char*)arg1 attributes:(const char**)arg2 ;
-(void)_endelement:(const char*)arg1 ;
-(void)_data:(const char*)arg1 len:(int)arg2 ;
@end

