//
//  ViewController.h
//  JSONExample
//
//  Created by Nitin Mehta on 21/02/17.
//  Copyright © 2017 Grofers. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    IBOutlet UITableView *mainTableView;
    NSMutableArray *trumpMessages;
    NSMutableData *data;
}



@end

