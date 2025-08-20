CREATE TABLE [dbo].[users] (
    [id]       INT           IDENTITY (1, 1) NOT NULL,
    [username] VARCHAR (MAX) NULL,
    [password] VARCHAR (MAX) NULL,
    [role]     VARCHAR (MAX) NULL,
    [status]   VARCHAR (MAX) NULL,
    [date]     DATE          NULL,
    PRIMARY KEY CLUSTERED ([id] ASC)
);



CREATE TABLE [dbo].[categories] (
    [id]       INT           IDENTITY (1, 1) NOT NULL,
    [category] VARCHAR (MAX) NULL,
    [date]     DATE          NULL,
    PRIMARY KEY CLUSTERED ([id] ASC)
);



CREATE TABLE [dbo].[products] (
    [id]          INT           IDENTITY (1, 1) NOT NULL,
    [prod_id]     VARCHAR (MAX) NULL,
    [prod_name]   VARCHAR (MAX) NULL,
    [category]    VARCHAR (MAX) NULL,
    [price]       FLOAT (53)    NULL,
    [stock]       INT           NULL,
    [image_path]  VARCHAR (MAX) NULL,
    [status]      VARCHAR (MAX) NULL,
    [date_insert] DATE          NULL,
    PRIMARY KEY CLUSTERED ([id] ASC)
);



CREATE TABLE [dbo].[orders] (
    [id]          INT           IDENTITY (1, 1) NOT NULL,
    [prod_id]     VARCHAR (MAX) NULL,
    [prod_name]   VARCHAR (MAX) NULL,
    [category]    VARCHAR (MAX) NULL,
    [qty]         INT           NULL,
    [orig_price]  FLOAT (53)    NULL,
    [total_price] FLOAT (53)    NULL,
    [order_date]  DATE          NULL,
    [customer_id] INT           NULL,
    [status]      VARCHAR (MAX) DEFAULT ('pending') NOT NULL,
    PRIMARY KEY CLUSTERED ([id] ASC)
);

DROP TABLE customers;
CREATE TABLE [dbo].[customers] (
    [id]          INT IDENTITY (1, 1) PRIMARY KEY,
    [customer_id] INT        NOT NULL,
    [category]    VARCHAR(100) NULL,
    [product]     VARCHAR(200) NULL,
    [price]       FLOAT NULL,
    [quantity]    INT NULL,
    [total_price] FLOAT NULL,
    [amount]      FLOAT NULL,
    [change]      FLOAT NULL,
    [order_date]  DATE NULL
);

