//
//  FMDBTempDBTests.h
//  fmdb
//
//  Created by Graham Dennis on 24/11/2013.
//
//

#import <XCTest/XCTest.h>
#import "LCDatabase.h"

@protocol FMDBTempDBTests <NSObject>

@optional
+ (void)populateDatabase:(LCDatabase *)database;

@end

@interface FMDBTempDBTests : XCTestCase <FMDBTempDBTests>

@property LCDatabase *db;
@property (readonly) NSString *databasePath;

@end
