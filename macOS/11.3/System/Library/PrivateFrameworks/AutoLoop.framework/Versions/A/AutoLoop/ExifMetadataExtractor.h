/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/Versions/A/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL, NSMutableDictionary, NSMutableArray;

@interface ExifMetadataExtractor : NSObject {

	NSDictionary* desiredAppleMakerKeyPairs;
	BOOL hadAllRequestedKeys;
	BOOL saveAllMetadata;
	NSURL* inFileURL;
	NSMutableDictionary* metadataDictionary;
	NSMutableArray* desiredExifKeysArray;
	NSMutableArray* facesArray;
	NSDictionary* allMetadata;

}

@property (retain) NSURL * inFileURL; 
@property (retain) NSMutableArray * desiredExifKeysArray; 
@property (readonly) NSMutableDictionary * metadataDictionary; 
@property (readonly) NSMutableArray * facesArray; 
@property (readonly) BOOL hadAllRequestedKeys; 
@property (assign) BOOL saveAllMetadata; 
@property (readonly) NSDictionary * allMetadata; 
-(id)init;
-(NSMutableDictionary *)metadataDictionary;
-(NSDictionary *)allMetadata;
-(void)setInFileURL:(NSURL *)arg1 ;
-(BOOL)keyIsDesired:(id)arg1 ;
-(BOOL)copyKeysFromDictionary:(id)arg1 ;
-(BOOL)CopyFromMakerMediaDict:(id)arg1 toDict:(id)arg2 ;
-(void)CopyFacesDataFromAuxDictionary:(id)arg1 toArray:(id)arg2 ;
-(void)performCorrectionsOnDictionary:(id)arg1 ;
-(short)processFile;
-(NSURL *)inFileURL;
-(NSMutableArray *)desiredExifKeysArray;
-(void)setDesiredExifKeysArray:(NSMutableArray *)arg1 ;
-(BOOL)hadAllRequestedKeys;
-(NSMutableArray *)facesArray;
-(BOOL)saveAllMetadata;
-(void)setSaveAllMetadata:(BOOL)arg1 ;
@end

